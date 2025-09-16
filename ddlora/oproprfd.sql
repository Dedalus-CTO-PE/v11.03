create table opraudrm
(
  oprmaudd    varchar2(8) default ' ' not null,
  oprmaudt    varchar2(8) default ' ' not null,
  oprmaudp    varchar2(2) default ' ' not null,
  oprmaudr    varchar2(1) default ' ' not null,
  oprmauds    number(1,0) default 0 not null,
  oprmaudo    varchar2(4) default ' ' not null,
  oprmroom    varchar2(6) default ' ' not null,
  oprmdesc    varchar2(40) default ' ' not null,
  oprmloc     varchar2(20) default ' ' not null,
  oprmusr1    varchar2(3) default ' ' not null,
  oprmusr2    varchar2(3) default ' ' not null,
  oprmusr3    varchar2(3) default ' ' not null,
  oprmusr4    varchar2(3) default ' ' not null,
  oprmusr5    varchar2(3) default ' ' not null,
  oprmstat    number(1,0) default 0 not null,
  oprmsun     number(4,0) default 0 not null,
  oprmmon     number(4,0) default 0 not null,
  oprmtue     number(4,0) default 0 not null,
  oprmwed     number(4,0) default 0 not null,
  oprmthu     number(4,0) default 0 not null,
  oprmfri     number(4,0) default 0 not null,
  oprmsat     number(4,0) default 0 not null,
  oprmgldg    varchar2(14) default ' ' not null,
  oprmhosp    varchar2(3) default ' ' not null,
  oprmspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null
)
tablespace pas_data; 
create index opraudrm on opraudrm
(
oprmaudd,
oprmaudt,
oprmaudp,
oprmaudr
)
tablespace pas_indx; 
create table opropraf
(
  oprmroom    varchar2(6) default ' ' not null,
  oprmdesc    varchar2(40) default ' ' not null,
  oprmloc     varchar2(20) default ' ' not null,
  oprmusr1    varchar2(3) default ' ' not null,
  oprmusr2    varchar2(3) default ' ' not null,
  oprmusr3    varchar2(3) default ' ' not null,
  oprmusr4    varchar2(3) default ' ' not null,
  oprmusr5    varchar2(3) default ' ' not null,
  oprmstat    number(1,0) default 0 not null,
  oprmsun     number(4,0) default 0 not null,
  oprmmon     number(4,0) default 0 not null,
  oprmtue     number(4,0) default 0 not null,
  oprmwed     number(4,0) default 0 not null,
  oprmthu     number(4,0) default 0 not null,
  oprmfri     number(4,0) default 0 not null,
  oprmsat     number(4,0) default 0 not null,
  oprmgldg    varchar2(14) default ' ' not null,
  oprmhosp    varchar2(3) default ' ' not null,
  oprmspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint opropra1 primary key( 
oprmroom)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index opropra2 on opropraf
(
oprmdesc,
oprmroom
)
  tablespace pas_indx; 
