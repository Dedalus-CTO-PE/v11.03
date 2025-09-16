create table pmsihiaf
(
  pmihurno    varchar2(8) default ' ' not null,
  pmihihin    varchar2(20) default ' ' not null,
  pmihadat    varchar2(8) default ' ' not null,
  pmihatim    varchar2(8) default ' ' not null,
  pmihvsta    varchar2(1) default ' ' not null,
  pmihasta    varchar2(1) default ' ' not null,
  pmihstat    varchar2(1) default ' ' not null,
  pmihourn    varchar2(8) default ' ' not null,
  pmihihis    varchar2(2) default ' ' not null,
  pmihhisv    varchar2(10) default ' ' not null,
  pmihmesi    varchar2(127) default ' ' not null,
  pmihbati    varchar2(20) default ' ' not null,
  pmihintb    varchar2(3) default ' ' not null,
  pmihnuid    varchar2(10) default ' ' not null,
  pmihcdat    varchar2(8) default ' ' not null,
  pmihctim    varchar2(8) default ' ' not null,
  pmihcuid    varchar2(10) default ' ' not null,
  pmihudat    varchar2(8) default ' ' not null,
  pmihutim    varchar2(8) default ' ' not null,
  pmihuuid    varchar2(10) default ' ' not null,
  pmihedat    varchar2(8) default ' ' not null,
  pmihetim    varchar2(8) default ' ' not null,
  pmihspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsihia1 primary key( 
pmihurno,
pmihihin,
pmihvsta,
pmihasta,
pmihedat,
pmihetim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmsihia2 on pmsihiaf
(
pmihurno,
pmihihin,
pmihadat,
pmihatim,
pmihvsta,
pmihasta,
pmihedat,
pmihetim
)
  tablespace pas_indx; 
create unique index pmsihia3 on pmsihiaf
(
pmihihin,
pmihadat,
pmihatim,
pmihurno,
pmihvsta,
pmihasta,
pmihedat,
pmihetim
)
  tablespace pas_indx; 
create unique index pmsihia4 on pmsihiaf
(
pmihadat,
pmihatim,
pmihihin,
pmihurno,
pmihvsta,
pmihasta,
pmihedat,
pmihetim
)
  tablespace pas_indx; 
