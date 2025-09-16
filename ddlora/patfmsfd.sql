create table patfmsaf
(
  ptfmsub     varchar2(1) default ' ' not null,
  ptfmcod     varchar2(13) default ' ' not null,
  ptfmidi     varchar2(5) default ' ' not null,
  ptfmire     varchar2(4) default ' ' not null,
  ptfmild     varchar2(2) default ' ' not null,
  ptfmica     varchar2(12) default ' ' not null,
  ptfmida     varchar2(12) default ' ' not null,
  ptfmigs     varchar2(12) default ' ' not null,
  ptfmtdi     varchar2(5) default ' ' not null,
  ptfmtre     varchar2(4) default ' ' not null,
  ptfmtld     varchar2(2) default ' ' not null,
  ptfmtca     varchar2(12) default ' ' not null,
  ptfmtda     varchar2(12) default ' ' not null,
  ptfmbasc    varchar2(3) default ' ' not null,
  ptfmhosp    varchar2(3) default ' ' not null,
  ptfmspa     varchar2(11) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patfmsa1 primary key( 
ptfmhosp,
ptfmsub,
ptfmcod)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
