create table patcdeaf
(
  dptcdrec    varchar2(3) default ' ' not null,
  ptcd4drg    varchar2(4) default ' ' not null,
  ptcdicdc    varchar2(9) default ' ' not null,
  ptcd4ddr    varchar2(4) default ' ' not null,
  ptcd4edr    varchar2(4) default ' ' not null,
  ptcdsprr    varchar2(25) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patcdea1 primary key( 
dptcdrec,
ptcd4drg,
ptcdicdc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patcdea2 on patcdeaf
(
ptcd4drg,
dptcdrec,
ptcdicdc
)
  tablespace pas_indx; 
create unique index patcdea3 on patcdeaf
(
ptcd4drg,
ptcdicdc
)
  tablespace pas_indx; 
