create table outeadaf
(
  otedclid    varchar2(6) default ' ' not null,
  otedrptc    varchar2(3) default ' ' not null,
  otedsrvi    varchar2(4) default ' ' not null,
  otedsrvc    varchar2(3) default ' ' not null,
  oteditmn    varchar2(5) default ' ' not null,
  otedserb    varchar2(9) default ' ' not null,
  otednopa    varchar2(2) default ' ' not null,
  otedexpc    varchar2(3) default ' ' not null,
  otedctid    varchar2(24) default ' ' not null,
  otedrkey    varchar2(24) default ' ' not null,
  otedspar    varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outeada1 primary key( 
otedclid,
otedrptc,
otedsrvi,
otedsrvc,
otedrkey)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outeada2 on outeadaf
(
otedctid,
otedclid,
otedrptc,
otedsrvi,
otedsrvc,
otedrkey
)
  tablespace pas_indx; 
