create table aaertaaf
(
  daertevn    varchar2(8) default ' ' not null,
  aertdate    varchar2(8) default ' ' not null,
  aerttime    varchar2(5) default ' ' not null,
  aertlocn    varchar2(30) default ' ' not null,
  aertadrv    varchar2(30) default ' ' not null,
  aertaad1    varchar2(35) default ' ' not null,
  aertaad2    varchar2(35) default ' ' not null,
  aertaad3    varchar2(35) default ' ' not null,
  aertaad4    varchar2(35) default ' ' not null,
  aertapst    varchar2(8) default ' ' not null,
  aertareg    varchar2(8) default ' ' not null,
  aertbdrv    varchar2(30) default ' ' not null,
  aertbad1    varchar2(35) default ' ' not null,
  aertbad2    varchar2(35) default ' ' not null,
  aertbad3    varchar2(35) default ' ' not null,
  aertbad4    varchar2(35) default ' ' not null,
  aertbpst    varchar2(8) default ' ' not null,
  aertbreg    varchar2(8) default ' ' not null,
  aertspar    varchar2(26) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint aaertaa1 primary key( 
daertevn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
