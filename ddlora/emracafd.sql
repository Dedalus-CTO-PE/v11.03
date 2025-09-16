create table emracaaf
(
  emaacode    varchar2(30) default ' ' not null,
  emaafdat    varchar2(8) default ' ' not null,
  emaatdat    varchar2(8) default ' ' not null,
  emaaag04    number(9,6) default 0 not null,
  emaaag59    number(9,6) default 0 not null,
  emaaag14    number(9,6) default 0 not null,
  emaaag69    number(9,6) default 0 not null,
  emaaag74    number(9,6) default 0 not null,
  emaaag79    number(9,6) default 0 not null,
  emaaag84    number(9,6) default 0 not null,
  emaaag85    number(9,6) default 0 not null,
  emaacdat    varchar2(8) default ' ' not null,
  emaactim    varchar2(8) default ' ' not null,
  emaacuid    varchar2(10) default ' ' not null,
  emaaudat    varchar2(8) default ' ' not null,
  emaautim    varchar2(8) default ' ' not null,
  emaauuid    varchar2(10) default ' ' not null,
  emaaaflg    varchar2(1) default ' ' not null,
  emaaspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emracaa1 primary key( 
emaacode,
emaafdat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
