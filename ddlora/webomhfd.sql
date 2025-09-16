create table webomhaf
(
  wboharid    varchar2(20) default ' ' not null,
  wbohrptc    varchar2(3) default ' ' not null,
  wbohmect    varchar2(2) default ' ' not null,
  wbohmeid    varchar2(2) default ' ' not null,
  wbohctid    varchar2(24) default ' ' not null,
  wbohmsid    varchar2(36) default ' ' not null,
  wbohspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint webomha1 primary key( 
wboharid,
wbohrptc,
wbohmect)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index webomha2 on webomhaf
(
wbohctid,
wboharid,
wbohrptc,
wbohmect
)
  tablespace pas_indx; 
create unique index webomha3 on webomhaf
(
wbohmsid,
wboharid,
wbohrptc,
wbohmect
)
  tablespace pas_indx; 
