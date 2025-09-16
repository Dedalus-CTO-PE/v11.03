create table webercaf
(
  wbecarid    varchar2(20) default ' ' not null,
  wbecrptc    varchar2(3) default ' ' not null,
  wbectype    varchar2(3) default ' ' not null,
  wbecline    varchar2(3) default ' ' not null,
  wbecdata    varchar2(1000) default ' ' not null,
  wbecudat    varchar2(8) default ' ' not null,
  wbecutim    varchar2(8) default ' ' not null,
  wbectrid    varchar2(24) default ' ' not null,
  wbecmsid    varchar2(36) default ' ' not null,
  wbecspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint weberca1 primary key( 
wbecarid,
wbecrptc,
wbectype,
wbecline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index weberca2 on webercaf
(
wbectrid,
wbecarid,
wbecrptc,
wbectype,
wbecline
)
  tablespace pas_indx; 
create unique index weberca3 on webercaf
(
wbecmsid,
wbecarid,
wbecrptc,
wbectype,
wbecline
)
  tablespace pas_indx; 
