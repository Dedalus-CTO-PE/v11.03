create table apsimsaf
(
  apimbch     varchar2(5) default ' ' not null,
  apimcrd     varchar2(5) default ' ' not null,
  apimref     varchar2(15) default ' ' not null,
  apimdoc     varchar2(15) default ' ' not null,
  apimtyp     varchar2(1) default ' ' not null,
  apimupd     varchar2(1) default ' ' not null,
  apimout     varchar2(1) default ' ' not null,
  apimter     varchar2(2) default ' ' not null,
  apimidt     varchar2(8) default ' ' not null,
  apimddt     varchar2(8) default ' ' not null,
  apimpdt     varchar2(8) default ' ' not null,
  apimtdt     varchar2(8) default ' ' not null,
  apimtot     number(14,2) default 0 not null,
  apimdis     number(14,2) default 0 not null,
  apimgst     number(14,2) default 0 not null,
  apimpay     number(14,2) default 0 not null,
  apimcm1     varchar2(70) default ' ' not null,
  apimcm2     varchar2(70) default ' ' not null,
  apimicm     varchar2(35) default ' ' not null,
  apimpayg    varchar2(1) default ' ' not null,
  apimspa     varchar2(29) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint apsimsa1 primary key( 
apimbch,
apimcrd,
apimref,
apimdoc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index apsimsa2 on apsimsaf
(
apimcrd,
apimidt,
apimref,
apimdoc,
apimbch
)
  tablespace pas_indx; 
create unique index apsimsa3 on apsimsaf
(
apimcrd,
apimref,
apimdoc,
apimbch
)
  tablespace pas_indx; 
create unique index apsimsa4 on apsimsaf
(
apimcrd,
apimdoc,
apimref,
apimbch
)
  tablespace pas_indx; 
create unique index apsimsa5 on apsimsaf
(
apimbch,
apimcrd,
apimdoc,
apimref
)
  tablespace pas_indx; 
create unique index apsimsa6 on apsimsaf
(
apimout,
apimcrd,
apimref,
apimdoc,
apimbch
)
  tablespace pas_indx; 
