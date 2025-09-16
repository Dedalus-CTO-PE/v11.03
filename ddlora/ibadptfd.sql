create table ibadptaf
(
  ibdpdept    varchar2(6) default ' ' not null,
  ibdpdesc    varchar2(80) default ' ' not null,
  ibdphosp    varchar2(3) default ' ' not null,
  ibdpward    varchar2(6) default ' ' not null,
  ibdpemrs    varchar2(3) default ' ' not null,
  ibdpoutl    varchar2(10) default ' ' not null,
  ibdpspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ibadpta1 primary key( 
ibdpdept)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index ibadpta2 on ibadptaf
(
ibdphosp,
ibdpdept
)
  tablespace pas_indx; 
create unique index ibadpta3 on ibadptaf
(
ibdpward,
ibdpdept
)
  tablespace pas_indx; 
create unique index ibadpta4 on ibadptaf
(
ibdpemrs,
ibdpdept
)
  tablespace pas_indx; 
create unique index ibadpta5 on ibadptaf
(
ibdpoutl,
ibdpdept
)
  tablespace pas_indx; 
