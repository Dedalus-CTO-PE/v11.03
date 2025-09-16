create table eocrefaf
(
  ecrfurno    varchar2(8) default ' ' not null,
  decrfepn    varchar2(5) default ' ' not null,
  decrfhos    varchar2(2) default ' ' not null,
  decrfref    varchar2(8) default ' ' not null,
  ecrfaccn    varchar2(20) default ' ' not null,
  ecrfstat    number(1,0) default 0 not null,
  ecrfcdat    varchar2(8) default ' ' not null,
  ecrfspar    varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint eocrefa1 primary key( 
ecrfurno,
decrfepn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index eocrefa2 on eocrefaf
(
ecrfurno,
decrfhos,
decrfepn
)
  tablespace pas_indx; 
create unique index eocrefa3 on eocrefaf
(
ecrfaccn,
ecrfurno,
decrfepn
)
  tablespace pas_indx; 
