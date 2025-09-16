create table scrmasaf
(
  scmapid     varchar2(8) default ' ' not null,
  scmasid     varchar2(2) default ' ' not null,
  scmades     varchar2(35) default ' ' not null,
  scmatop     number(2,0) default 0 not null,
  scmalef     number(3,0) default 0 not null,
  scmabot     number(2,0) default 0 not null,
  scmarig     number(3,0) default 0 not null,
  scmacbf     varchar2(8) default ' ' not null,
  scmacaf     varchar2(8) default ' ' not null,
  scmatyp     number(2,0) default 0 not null,
  scmasex     varchar2(1) default ' ' not null,
  scmafsc     varchar2(2) default ' ' not null,
  scmaclr     varchar2(1) default ' ' not null,
  scmafpr     varchar2(8) default ' ' not null,
  scmaspa     varchar2(10) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint scrmasa1 primary key( 
scmapid,
scmasid)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
