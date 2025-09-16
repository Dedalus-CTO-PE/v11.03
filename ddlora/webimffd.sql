create table webimfaf
(
  wbiffbid    varchar2(3) default ' ' not null,
  wbifarid    varchar2(20) default ' ' not null,
  wbifclid    varchar2(6) default ' ' not null,
  wbifrptc    varchar2(3) default ' ' not null,
  wbifmecn    varchar2(2) default ' ' not null,
  wbifsvcn    varchar2(4) default ' ' not null,
  wbifmeid    varchar2(2) default ' ' not null,
  wbifsvid    varchar2(4) default ' ' not null,
  wbifsvbe    varchar2(9) default ' ' not null,
  wbifsvca    varchar2(9) default ' ' not null,
  wbifsvds    varchar2(8) default ' ' not null,
  wbifsvec    varchar2(3) default ' ' not null,
  wbifsvin    varchar2(5) default ' ' not null,
  wbifsvsf    varchar2(9) default ' ' not null,
  wbiftrid    varchar2(24) default ' ' not null,
  wbifmsid    varchar2(36) default ' ' not null,
  wbifspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webimfa1 primary key( 
wbiffbid,
wbifarid,
wbifclid,
wbifrptc,
wbifmecn,
wbifsvcn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webimfa2 on webimfaf
(
wbiftrid,
wbiffbid,
wbifarid,
wbifclid,
wbifrptc,
wbifmecn,
wbifsvcn
)
  tablespace pas_indx; 
create unique index webimfa3 on webimfaf
(
wbifmsid,
wbiffbid,
wbifarid,
wbifclid,
wbifrptc,
wbifmecn,
wbifsvcn
)
  tablespace pas_indx; 
