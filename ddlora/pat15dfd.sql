create table pat10d5f
(
  dpcode      varchar2(9) default ' ' not null,
  ddesc       varchar2(70) default ' ' not null,
  dflag       varchar2(1) default ' ' not null,
  dagegp      varchar2(1) default ' ' not null,
  dlow        number(2,0) default 0 not null,
  dhigh       number(2,0) default 0 not null,
  pt0d2agp    varchar2(1) default ' ' not null,
  pt0d2all    number(2,0) default 0 not null,
  pt0d2ahl    number(2,0) default 0 not null,
  dsex        varchar2(1) default ' ' not null,
  pt0dadtp    varchar2(1) default ' ' not null,
  pt0dprfx    varchar2(2) default ' ' not null,
  pt0dsac2    varchar2(7) default ' ' not null,
  ddagger     varchar2(1) default ' ' not null,
  darea       varchar2(1) default ' ' not null,
  pt0dcpra    varchar2(1) default ' ' not null,
  pt0dacrq    varchar2(1) default ' ' not null,
  pt0dmi9c    varchar2(9) default ' ' not null,
  dpt0dcmf    varchar2(2) default ' ' not null,
  dpt0dv1c    varchar2(1) default ' ' not null,
  dpt0dv2c    varchar2(1) default ' ' not null,
  pt0dv1mp    varchar2(9) default ' ' not null,
  dpt0dv3c    varchar2(1) default ' ' not null,
  pt0dv2mp    varchar2(9) default ' ' not null,
  dpt0dv4c    varchar2(1) default ' ' not null,
  dpt0dv5c    varchar2(1) default ' ' not null,
  pt0dspr3    varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pati15d1 primary key( 
dpcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pati15d2 on pat10d5f
(
ddesc,
dpcode
)
  tablespace pas_indx; 
