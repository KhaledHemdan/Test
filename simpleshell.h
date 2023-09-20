#ifndef SIMPLESHELL_H
#define SIMPLESHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <limits.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>




#define MALAF_HOSTO	".simple_shell_history"
#define MALAF_HOSTO_MAX	4096
#define NNORN_DMC	0
#define RORO_DCM		1
#define DMD_WWWW		2
#define SOLSALA	3
#define iqraa_bbuuff_SIZE 1024
#define OKTOB_BBUUFF_HAGM 1024
#define FKOSHY_BBUF -1
#define EMAR_HAAAAAT 0
#define EMARAT 0
#define TAHWEEL_LSMALL	1
#define TAHWEEL_LLAESHARA	2

extern char **environ;

typedef struct liststr
{
	int num;
	char *str;
	struct liststr *next;
} list_t;

typedef struct passinfo
{
	char *arg;
	char **argv;
	char *path;
	int argc;
	unsigned int line_count;
	int err_num;
	int linecount_flag;
	char *fname;
	list_t *env;
	list_t *history;
	list_t *alias;
	char **environ;
	int env_changed;
	int status;

	char **cmd_buf;
	int cmd_buf_type;
	int readfd;
	int histcount;
} info_t;

#define INFO_INIT \
{NULL, NULL, NULL, 0, 0, 0, 0, NULL, NULL, NULL, NULL, NULL, 0, 0, NULL, \
	0, 0, 0}

typedef struct builtin
{
	char *type;
	int (*func)(info_t *);
} builtin_table;


/* Comment be Fatthallah and khaled */
int msl(info_t *, char **);
int bahth_mabni(info_t *);
void bahth_cmd(info_t *);
void far3_cmd(info_t *);

/* Comment be Fatthallah and khaled */
int hal_cmd(info_t *, char *);
char *dup_harf(char *, int, int);
char *bahth_tareeq(info_t *, char *, char *);

/* Comment be Fatthallah and khaled */
int _strtole(char *);
int _strqarn(char *, char *);
char *bedaya_b(const char *, const char *);
char *_strdamg(char *, char *);

/* Comment be Fatthallah and khaled */
char *_strnoskha(char *, char *);
char *_strkarr(const char *);
void _da3(char *);
int _da3harf(char);

/* Comment be Fatthallah and khaled */
char *_gomlanoskha(char *, char *, int);
char *_gomlaota(char *, char *, int);
char *_gomlaharf(char *, char);

/* Comment be Fatthallah and khaled */
int _farrotata(char *);
void etbaa_ghalat(info_t *, char *);
int etbaa_ede(int, int);
char *howl_rakam(long int, int, int);
void imsah_taalek(char *);

/* Comment be Fatthallah and khaled */
list_t *dif_node(list_t **, const char *, int);
list_t *dif_node_end(list_t **, const char *, int);
size_t etbaa_lista_str(const list_t *);
int imsah_node(list_t **, unsigned int);
void hrr_lista(list_t **);

/* Comment be Fatthallah and khaled */
size_t lista_len(const list_t *);
char **lista_l_harf(list_t *);
size_t etbaa_lista(const list_t *);
list_t *node_bedaya_b(list_t *, char *, char);
ssize_t hat_node_edkhal(list_t *, list_t *);

/* Comment be Fatthallah and khaled */
int loopmsl(char **);

/* Comment be Fatthallah and khaled */
char **_strsplit(char *, char *);
char **_strsplit2(char *, char);

/* Comment be Fatthallah and khaled */
char *_filmem(char *, char, unsigned int);
void fhrr(char **);
void *_retawze3(void *, unsigned int, unsigned int);

/* Comment be Fatthallah and khaled */
int hrr(void **);

/* Comment be Fatthallah and khaled */
int famerxcteve(info_t *);
int fa_soly(char, char *);
int _ocolbha(int);
int _otata(char *);

/* Comment be Fatthallah and khaled */
void _faehot(char *);
int _faehothrf(char);
int _fahotifede(char c, int fd);
int _fahotxxifede(char *str, int fd);

/* Comment be Fatthallah and khaled */
int hal_chain(info_t *, char *, size_t *);
void fahs_chain(info_t *, char *, size_t *, size_t, size_t);
int tabdel_chain(info_t *);
int tabdel_vars(info_t *);
int tabdel_gomla(char **, char *);

/* Comment be Fatthallah and khaled */
int _fa_xy_Thxit(info_t *);
int _fa_xy_ThDC(info_t *);
int _xmosaada(info_t *);

/* Comment be Fatthallah and khaled */
int _faxytarekh(info_t *);
int _xyoly(info_t *);

/* Comment be Fatthallah and khaled */
ssize_t hat_edkhal(info_t *);
int _hatkhat(info_t *, char **, size_t *);
void almedkhaleed(int);

/* Comment be Fatthallah and khaled */
void imsah_maal(info_t *);
void fasseet_maal(info_t *, char **);
void hrr_maal(info_t *, int);

/* Comment be Fatthallah and khaled */
char *_fahatbeaa(info_t *, const char *);
int _faxybeaa(info_t *);
int _faxyodbeaa(info_t *);
int _faxymshsseetbeaa(info_t *);
int fanasbeaakayma(info_t *);

/* Comment be Fatthallah and khaled */
char **hat_beaaaa(info_t *);
int _mshsettbeaaa(info_t *, char *);
int _setttbeaa(info_t *, char *, char *);

/* Comment be Fatthallah and khaled */
char *hat_tareekh(info_t *fa_arg);
int ikteb_tareekh(info_t *fa_arg);
int iqraa_tareekh(info_t *fa_arg);
int ebni_tareekh(info_t *fa_arg, char *pofo, int linecount);
int raqam_tareekh(info_t *fa_arg);



#endif
