create table pmsbdcaf
(
pmbcward    varchar2(3),
pmbcbed     varchar2(3),
pmbcfrdt    varchar2(8),
pmbcfrtm    varchar2(8),
pmbcfrpr    varchar2(1),
pmbctodt    varchar2(8),
pmbctotm    varchar2(8),
pmbctopr    varchar2(1),
pmbcreas    varchar2(3),
pmbccrdt    varchar2(8),
pmbccrtm    varchar2(8),
pmbccrid    varchar2(10),
pmbcupdt    varchar2(8),
pmbcuptm    varchar2(8),
pmbcupid    varchar2(10),
pmbcdoct    varchar2(10),
pmbcftrc    varchar2(50),
pmbcspar    varchar2(50),
lf          varchar2(1),
constraint pmsbdca1 primary key( 
pmbcward,
pmbcbed,
pmbcfrdt,
pmbcfrtm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsbdcaf for pmsbdcaf;
create unique index pmsbdca2 on pmsbdcaf
(
pmbcfrpr,
pmbcfrdt,
pmbcfrtm,
pmbcward,
pmbcbed
)
  tablespace pas_indx; 
create unique index pmsbdca3 on pmsbdcaf
(
pmbctopr,
pmbctodt,
pmbctotm,
pmbcward,
pmbcbed,
pmbcfrdt,
pmbcfrtm
)
  tablespace pas_indx; 
