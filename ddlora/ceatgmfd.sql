create table ceatgmaf
(
  cetgcli     varchar2(6) default ' ' not null,
  cetgspc     varchar2(3) default ' ' not null,
  cetgpsc     varchar2(7) default ' ' not null,
  cetgqty     number(8,2) default 0 not null,
  cetgspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceatgma1 primary key( 
cetgcli,
cetgspc,
cetgpsc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
