create table allincaf
(
  alindept    varchar2(3) default ' ' not null,
  alincode    varchar2(9) default ' ' not null,
  alindesc    varchar2(50) default ' ' not null,
  alinactv    varchar2(1) default ' ' not null,
  alincdat    varchar2(8) default ' ' not null,
  alinctim    varchar2(8) default ' ' not null,
  alincuid    varchar2(10) default ' ' not null,
  alinudat    varchar2(8) default ' ' not null,
  alinutim    varchar2(8) default ' ' not null,
  alinuuid    varchar2(10) default ' ' not null,
  alinspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint allinca1 primary key( 
alindept,
alincode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index allinca2 on allincaf
(
alindept,
alindesc,
alincode
)
  tablespace pas_indx; 
