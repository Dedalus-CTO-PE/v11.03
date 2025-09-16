create table ceatcmaf
(
  cetcnt      varchar2(3) default ' ' not null,
  cetcspc     varchar2(3) default ' ' not null,
  cetcpsc     varchar2(7) default ' ' not null,
  cetcstm     number(2,0) default 0 not null,
  cetcetm     number(2,0) default 0 not null,
  cetcspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceatcma1 primary key( 
cetcnt,
cetcspc,
cetcpsc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
