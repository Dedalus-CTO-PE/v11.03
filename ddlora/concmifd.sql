create table concmiaf
(
  dcocmadm    varchar2(8) default ' ' not null,
  cocmlchg    varchar2(8) default ' ' not null,
  cocmsend    varchar2(1) default ' ' not null,
  dcocmtyp    varchar2(2) default ' ' not null,
  cocmrunn    varchar2(4) default ' ' not null,
  cocmtchg    varchar2(5) default ' ' not null,
  cocmspar    varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint concmia1 primary key( 
dcocmadm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index concmia2 on concmiaf
(
dcocmtyp,
cocmsend,
cocmlchg,
dcocmadm
)
  tablespace pas_indx; 
create unique index concmia3 on concmiaf
(
dcocmtyp,
cocmrunn,
dcocmadm
)
  tablespace pas_indx; 
