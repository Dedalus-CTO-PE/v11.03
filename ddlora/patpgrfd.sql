create table patpgraf
(
  dptpgadm    varchar2(8) default ' ' not null,
  dptpgepn    varchar2(2) default ' ' not null,
  ptpggpvr    varchar2(3) default ' ' not null,
  ptpgndrg    varchar2(4) default ' ' not null,
  ptpgnmdc    varchar2(4) default ' ' not null,
  ptpgnwgt    number(10,4) default 0 not null,
  ptpgnals    number(6,2) default 0 not null,
  ptpgsdrg    varchar2(4) default ' ' not null,
  ptpgsmdc    varchar2(4) default ' ' not null,
  ptpgswgt    number(10,4) default 0 not null,
  ptpgsals    number(6,2) default 0 not null,
  ptpgldrg    varchar2(4) default ' ' not null,
  ptpglmdc    varchar2(4) default ' ' not null,
  ptpglwgt    number(10,4) default 0 not null,
  ptpglals    number(6,2) default 0 not null,
  ptpgpccl    varchar2(1) default ' ' not null,
  ptpgwfix    number(16,4) default 0 not null,
  ptpgwvar    number(16,4) default 0 not null,
  ptpgwtol    number(16,4) default 0 not null,
  ptpgwwtu    number(10,4) default 0 not null,
  ptpgwwtd    varchar2(13) default ' ' not null,
  ptpgecrw    varchar2(11) default ' ' not null,
  ptpgspar    varchar2(24) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patpgra1 primary key( 
dptpgadm,
dptpgepn,
ptpggpvr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patpgra2 on patpgraf
(
dptpgadm,
ptpggpvr,
dptpgepn
)
  tablespace pas_indx; 
