create table pmsnepaf
(
  pmnecntr    varchar2(6) default ' ' not null,
  pmnevtyp    varchar2(2) default ' ' not null,
  pmnecode    varchar2(10) default ' ' not null,
  pmneindc    varchar2(10) default ' ' not null,
  pmneindv    varchar2(30) default ' ' not null,
  pmnenepp    number(18,4) default 0 not null,
  pmneactv    varchar2(1) default ' ' not null,
  pmnecuid    varchar2(10) default ' ' not null,
  pmnecdat    varchar2(8) default ' ' not null,
  pmnectim    varchar2(8) default ' ' not null,
  pmneuuid    varchar2(10) default ' ' not null,
  pmneudat    varchar2(8) default ' ' not null,
  pmneutim    varchar2(8) default ' ' not null,
  pmnespar    varchar2(120) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsnepa1 primary key( 
pmnecntr,
pmnevtyp,
pmnecode,
pmneindc,
pmneindv)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsnepa2 on pmsnepaf
(
pmnevtyp,
pmnecntr,
pmnecode,
pmneindc,
pmneindv
)
  tablespace pas_indx; 
