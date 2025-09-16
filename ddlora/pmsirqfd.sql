create table pmsirqaf
(
  pmiqrtyp    varchar2(2) default ' ' not null,
  pmiqcode    varchar2(50) default ' ' not null,
  pmiqrdat    varchar2(8) default ' ' not null,
  pmiqrtim    varchar2(8) default ' ' not null,
  pmiqruid    varchar2(10) default ' ' not null,
  pmiqsurn    varchar2(40) default ' ' not null,
  pmiqfnam    varchar2(40) default ' ' not null,
  pmiqsnam    varchar2(40) default ' ' not null,
  pmiqbdat    varchar2(8) default ' ' not null,
  pmiqpsex    varchar2(1) default ' ' not null,
  pmiqmedi    varchar2(10) default ' ' not null,
  pmiqmccd    varchar2(2) default ' ' not null,
  pmiqmedv    varchar2(8) default ' ' not null,
  pmiqdvan    varchar2(20) default ' ' not null,
  pmiqiden    varchar2(20) default ' ' not null,
  pmiqadd1    varchar2(60) default ' ' not null,
  pmiqadd2    varchar2(60) default ' ' not null,
  pmiqadd3    varchar2(60) default ' ' not null,
  pmiqadd4    varchar2(60) default ' ' not null,
  pmiqpost    varchar2(8) default ' ' not null,
  pmiqsad1    varchar2(60) default ' ' not null,
  pmiqsad2    varchar2(60) default ' ' not null,
  pmiqsad3    varchar2(60) default ' ' not null,
  pmiqsad4    varchar2(60) default ' ' not null,
  pmiqspst    varchar2(8) default ' ' not null,
  pmiqptyp    varchar2(1) default ' ' not null,
  pmiqname    varchar2(50) default ' ' not null,
  pmiqstyp    varchar2(1) default ' ' not null,
  pmiqunit    varchar2(20) default ' ' not null,
  pmiqspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsirqa1 primary key( 
pmiqrtyp,
pmiqcode,
pmiqrdat,
pmiqrtim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
