create table webihgaf
(
  wbiofbid    varchar2(3) default ' ' not null,
  wbioarid    varchar2(20) default ' ' not null,
  wbiofrid    varchar2(15) default ' ' not null,
  wbiorptc    varchar2(3) default ' ' not null,
  wbiosecn    varchar2(2) default ' ' not null,
  wbiocamt    varchar2(9) default ' ' not null,
  wbioscod    varchar2(4) default ' ' not null,
  wbiosdsc    varchar2(80) default ' ' not null,
  wbiofdte    varchar2(8) default ' ' not null,
  wbionosv    varchar2(2) default ' ' not null,
  wbiofbam    varchar2(9) default ' ' not null,
  wbiosdte    varchar2(8) default ' ' not null,
  wbiotdte    varchar2(8) default ' ' not null,
  wbiotrid    varchar2(24) default ' ' not null,
  wbiomsid    varchar2(36) default ' ' not null,
  wbiospar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webihga1 primary key( 
wbiofbid,
wbioarid,
wbiofrid,
wbiorptc,
wbiosecn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webihga2 on webihgaf
(
wbiotrid,
wbiofbid,
wbioarid,
wbiofrid,
wbiorptc,
wbiosecn
)
  tablespace pas_indx; 
create unique index webihga3 on webihgaf
(
wbiomsid,
wbiofbid,
wbioarid,
wbiofrid,
wbiorptc,
wbiosecn
)
  tablespace pas_indx; 
