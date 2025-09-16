create table patcmpaf
(
  dptcpcmf    varchar2(2) default ' ' not null,
  ptcp1pcd    varchar2(9) default ' ' not null,
  ptcp2pcd    varchar2(9) default ' ' not null,
  ptcp1mcd    varchar2(9) default ' ' not null,
  ptcp2mcd    varchar2(9) default ' ' not null,
  ptcp3mcd    varchar2(9) default ' ' not null,
  ptcpspr1    varchar2(52) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patcmpa1 primary key( 
dptcpcmf,
ptcp1pcd,
ptcp2pcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patcmpa2 on patcmpaf
(
ptcp1pcd,
ptcp2pcd,
dptcpcmf
)
  tablespace pas_indx; 
