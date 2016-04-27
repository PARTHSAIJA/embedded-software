/*! @file
 *
 *  @brief Functions which abstract communication with the computer into commands.
 *
 *  @author Robin Wohlers-Reichel, Joshua Gonsalves
 *  @date 2016-03-23
 */
/*!
**  @addtogroup cmd_module CMD module documentation
**  @{
*/
#ifndef CMD_H
#define CMD_H

#include "types.h"

 /*!
  * The PC will issue this command upon startup
  * to retrieve the state of the Tower to update
  * the interface application.
  * */
#define CMD_RX_GET_SPECIAL_START_VAL 0x4

/*!
 * Program a byte of flash
 */
#define CMD_RX_FLASH_PROGRAM_BYTE 0x7

/*!
 * Read a byte of flash
 */
#define CMD_RX_FLASH_READ_BYTE 0x8

/*!
 * Get the version of the Tower software.
 */
#define CMD_RX_GET_VERSION 0x9

/*!
 * Get or set the Student ID associated with
 * the Tower software.
 */
#define CMD_RX_TOWER_NUMBER 0xb

/*!
 * Get or set the tower mode
 */
#define CMD_RX_TOWER_MODE 0xd

/*!
 * The Tower will issue this command upon startup to
 * allow the PC to update the interface application
 * and the Tower. Typically, setup data will also be
 * sent from the Tower to the PC.
 */
#define CMD_TX_TOWER_STARTUP 0x4

/*!
 * Send the result of a flash read operation
 */
#define CMD_TX_FLASH_READ_BYTE 0x8

/*!
 * Send the tower version to the PC.
 */
#define CMD_TX_TOWER_VERSION 0x9

/*!
 * Send the tower number to the PC.
 */
#define CMD_TX_TOWER_NUMBER 0xb

/*!
 * Send the tower mode to the PC application
 */
#define CMD_TX_TOWER_MODE 0xd

/*!
 * Packet parameter 1 to get tower number.
 */
#define CMD_TOWER_NUMBER_GET 1

/*!
 * Packet parameter 1 to set tower number.
 */
#define CMD_TOWER_NUMBER_SET 2

/*!
 * Packet parameter 1 to get tower mode.
 */
#define CMD_TOWER_MODE_GET 1

/*!
 * Packet parameter 1 to set tower mode.
 */
#define CMD_TOWER_MODE_SET 2

/*!
 * The lower 2 bytes of 12011146.
 */
#define CMD_SID 0x468A

/*!
 * @brief Set up the tower number and mode flash allocation.
 * @note Requires the flash module to be started.
 */
BOOL CMD_Init();

/*!
 * @brief Programs a byte of flash at the specified offset.
 * @param offset Offset of the byte from the start of the sector.
 * @param data The byte to write.
 * @note An offset greater than 7 will erase the sector.
 * @return BOOL TRUE if the operation succeeded.
 */
BOOL CMD_RX_Flash_Program_Byte(const uint8_t offset, const uint8_t data);

/*!
 * @brief Read a byte of the flash.
 * @param offset Offset of the byte from the start of the sector.
 * @param data The address to read the value into.
 * @note An offset past the end of the flash will fail.
 * @return BOOL TRUE if the operation succeeded.
 */
BOOL CMD_RX_Flash_Read_Byte(const uint8_t offset, uint8_t * const data);

/*!
 * @brief Saves the tower number to a buffer.
 * @param lsb Least significant byte of the Tower number
 * @param msb Most significant byte of the Tower number
 * @return BOOL TRUE if the operation succeeded.
 */
BOOL CMD_RX_Tower_Number(uint8_t lsb, uint8_t msb);

/*!
 * @brief Set the tower mode and save to flash.
 * @param lsb The least significant byte.
 * @param msb The most significant byte.
 * @return BOOL TRUE if the operation succeeded.
 */
BOOL CMD_RX_Tower_Mode(const uint8_t lsb, const uint8_t msb);

/*!
 * @brief Sends the startup packet to the computer.
 * @return BOOL TRUE if the operation succeeded.
 */
BOOL CMD_TX_Startup_Packet();

/*!
 * @brief Read a byte of flash at the specified address
 * @param offset The offset of the byte which is being transmitted.
 * @param data The actual byte.
 * @return BOOL TRUE if the operation succeeded.
 */
BOOL CMD_TX_Flash_Read_Byte(const uint8_t offset, const uint8_t data);

/*!
 * @brief Sends the tower version to the computer.
 * @return BOOL TRUE if the operation succeeded.
 */
BOOL CMD_TX_Special_Tower_Version();

/*!
 * @brief Sends the tower number to the computer.
 * @return BOOL TRUE if success.
 */
BOOL CMD_TX_Tower_Number();

/*!
 * @brief Get the tower mode and save to flash.
 * @return BOOL TRUE if success.
 */
BOOL CMD_TX_Tower_Mode();


/*!
** @}
*/

#endif
