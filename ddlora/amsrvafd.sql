create table amsrvaaf
(
  amrvreg     varchar2(2) default ' ' not null,
  amrvass     varchar2(12) default ' ' not null,
  amrvrdt     varchar2(8) default ' ' not null,
  amrvyear    varchar2(4) default ' ' not null,
  amrvper     varchar2(2) default ' ' not null,
  amrvrty     varchar2(3) default ' ' not null,
  amrvref     varchar2(15) default ' ' not null,
  amrvdes     varchar2(30) default ' ' not null,
  amrvamt     number(14,2) default 0 not null,
  amrvaad     number(14,2) default 0 not null,
  amrvrvr     number(14,2) default 0 not null,
  amrvpvr     number(14,2) default 0 not null,
  amrvur1     varchar2(30) default ' ' not null,
  amrvur2     varchar2(30) default ' ' not null,
  amrvud1     varchar2(8) default ' ' not null,
  amrvud2     varchar2(8) default ' ' not null,
  amrvuy1     varchar2(1) default ' ' not null,
  amrvuy2     varchar2(1) default ' ' not null,
  amrvspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint amsrvaa1 primary key( 
amrvreg,
amrvass,
amrvrdt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index amsrvaa2 on amsrvaaf
(
amrvreg,
amrvass,
amrvyear,
amrvrdt
)
  tablespace pas_indx; 
