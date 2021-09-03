/*Esta biblioteca contiene funciones para hacer operaciones con el dinero de un banco*/

struct cuentasBanc * CrearCuenta( struct cuentasBanc *cuentasBancaria );
/** @brief crea una cuenta
 *  @param cuentasBancaria cuenta bancaria del usuario
 *  @returns apuntador llamado cuentasBancaria
 */
struct cuentasBanc * depositar( struct cuentasBanc *BA );
/** @brief
 *  @param cuentasBancaria cuenta bancaria del usuario
 *  @returns apuntador llamado cuentasBancaria
 */
int generarNumero( struct cuentasBanc *CuentasB );
/** @brief
 *  @param cuentasBancaria cuenta bancaria del usuario
 *  @returns aleatorio
 */
struct cuentaBanc * mostrarCuentas( struct cuentasBanc *CB );
/** @brief
 *  @param cuentasBancaria cuenta bancaria del usuario
 *  @returns apuntador llamado cuentasBancaria
 */
struct cuentasBanc*  retirarSinTarjeta( struct cuentasBanc *bankAccount, long int random);
/** @brief
 *  @param cuentasBancaria cuenta bancaria del usuario
 *  @param random
 *  @returns apuntador llamado cuentasBancaria
 */
struct cuentasBanc * transferir(struct cuentasBanc *cuentasBancaria);
/** @brief
 *  @param cuentasBancaria cuenta bancaria del usuario
 *  @returns apuntador llamado cuentasBancaria
 */