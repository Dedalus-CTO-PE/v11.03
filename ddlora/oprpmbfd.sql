create table oprpmbaf
(
  oppmunid    varchar2(10) default ' ' not null,
  oppmtmno    varchar2(1) default ' ' not null,
  oppmcmbs    varchar2(9) default ' ' not null,
  doppmcnt    varchar2(3) default ' ' not null,
  oppmserv    varchar2(4) default ' ' not null,
  oppmgsta    number(1,0) default 0 not null,
  oppmgstc    varchar2(6) default ' ' not null,
  oppmrefn    varchar2(12) default ' ' not null,
  oppmspar    varchar2(37) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprpmba1 primary key( 
oppmunid,
oppmtmno,
doppmcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index oprpmba2 on oprpmbaf
(
oppmcmbs,
oppmunid,
oppmtmno,
doppmcnt
)
  tablespace pas_indx; 
