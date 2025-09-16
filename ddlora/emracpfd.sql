create table emracpaf
(
  emapcode    varchar2(30) default ' ' not null,
  emapfdat    varchar2(8) default ' ' not null,
  emaptdat    varchar2(8) default ' ' not null,
  emapage1    number(9,6) default 0 not null,
  emapage2    number(9,6) default 0 not null,
  emaptct1    number(9,6) default 0 not null,
  emaptct2    number(9,6) default 0 not null,
  emaptct3    number(9,6) default 0 not null,
  emaptct4    number(9,6) default 0 not null,
  emaptct5    number(9,6) default 0 not null,
  emapcdat    varchar2(8) default ' ' not null,
  emapctim    varchar2(8) default ' ' not null,
  emapcuid    varchar2(10) default ' ' not null,
  emapudat    varchar2(8) default ' ' not null,
  emaputim    varchar2(8) default ' ' not null,
  emapuuid    varchar2(10) default ' ' not null,
  emapaflg    varchar2(1) default ' ' not null,
  emapspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint emracpa1 primary key( 
emapcode,
emapfdat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
