create table mrtaucaf
(
  mracvisn    varchar2(8) default ' ' not null,
  mracepsn    varchar2(2) default ' ' not null,
  mracadte    varchar2(8) default ' ' not null,
  mracodrg    varchar2(4) default ' ' not null,
  mracowie    number(10,4) default 0 not null,
  mracndrg    varchar2(4) default ' ' not null,
  mracnwie    number(10,4) default 0 not null,
  mracdwie    number(10,4) default 0 not null,
  mracclnc    varchar2(10) default ' ' not null,
  mractype    varchar2(3) default ' ' not null,
  mracrchg    varchar2(3) default ' ' not null,
  mracnchg    varchar2(1) default ' ' not null,
  mraccomm    varchar2(100) default ' ' not null,
  mraccdte    varchar2(8) default ' ' not null,
  mracctim    varchar2(8) default ' ' not null,
  mraccusr    varchar2(10) default ' ' not null,
  mraccdsc    varchar2(30) default ' ' not null,
  mracudte    varchar2(8) default ' ' not null,
  mracutim    varchar2(8) default ' ' not null,
  mracuusr    varchar2(10) default ' ' not null,
  mracudsc    varchar2(30) default ' ' not null,
  mracodol    number(14,2) default 0 not null,
  mracndol    number(14,2) default 0 not null,
  mracdifd    number(14,2) default 0 not null,
  mracddnr    varchar2(1) default ' ' not null,
  mracohcp    varchar2(10) default ' ' not null,
  mracocof    varchar2(3) default ' ' not null,
  mracodat    varchar2(8) default ' ' not null,
  mracspar    varchar2(28) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mrtauca1 primary key( 
mracvisn,
mracepsn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mrtauca2 on mrtaucaf
(
mracvisn,
mracepsn,
mracadte
)
  tablespace pas_indx; 
