create table pmsbbdaf
(
pmbdhosp    varchar2(3),
pmbdward    varchar2(3),
pmbdroom    varchar2(3),
pmbdbedd    varchar2(3),
pmbdseq1    varchar2(2),
pmbdseq2    varchar2(2),
pmbdseq3    varchar2(2),
pmbdseq4    varchar2(2),
pmbdseq5    varchar2(2),
pmbdcadm    varchar2(8),
pmbdtbdt    varchar2(8),
pmbdtbtm    varchar2(8),
pmbdpowd    varchar2(3),
pmbdpobd    varchar2(3),
pmbdsurn    varchar2(20),
pmbdgivn    varchar2(25),
pmbdgend    varchar2(1),
pmbdhfst    varchar2(1),
pmbdceas    varchar2(1),
pmbdurno    varchar2(8),
pmbdewrd    varchar2(3),
pmbdebed    varchar2(3),
pmbdwebc    varchar2(10),
pmbddatc    varchar2(8),
pmbdtimc    varchar2(8),
pmbdwebu    varchar2(10),
pmbddatu    varchar2(8),
pmbdtimu    varchar2(8),
pmbdspar    varchar2(50),
lf          varchar2(1),
constraint pmsbbda1 primary key( 
pmbdhosp,
pmbdward,
pmbdroom,
pmbdbedd,
pmbdcadm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsbbdaf for pmsbbdaf;
create unique index pmsbbda2 on pmsbbdaf
(
pmbdurno,
pmbdcadm,
pmbdhosp,
pmbdward,
pmbdroom,
pmbdbedd
)
  tablespace pas_indx; 
create unique index pmsbbda3 on pmsbbdaf
(
pmbdhosp,
pmbdseq1,
pmbdward,
pmbdroom,
pmbdbedd,
pmbdcadm
)
  tablespace pas_indx; 
create unique index pmsbbda4 on pmsbbdaf
(
pmbdhosp,
pmbdseq2,
pmbdward,
pmbdroom,
pmbdbedd,
pmbdcadm
)
  tablespace pas_indx; 
create unique index pmsbbda5 on pmsbbdaf
(
pmbdhosp,
pmbdseq3,
pmbdward,
pmbdroom,
pmbdbedd,
pmbdcadm
)
  tablespace pas_indx; 
create unique index pmsbbda6 on pmsbbdaf
(
pmbdhosp,
pmbdseq4,
pmbdward,
pmbdroom,
pmbdbedd,
pmbdcadm
)
  tablespace pas_indx; 
create unique index pmsbbda7 on pmsbbdaf
(
pmbdhosp,
pmbdseq5,
pmbdward,
pmbdroom,
pmbdbedd,
pmbdcadm
)
  tablespace pas_indx; 
