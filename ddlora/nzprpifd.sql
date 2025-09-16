create table nzprpiaf
(
  nzrpadmn    varchar2(8) default ' ' not null,
  nzrpinvn    varchar2(8) default ' ' not null,
  nzrprinv    varchar2(20) default ' ' not null,
  nzrpdate    varchar2(8) default ' ' not null,
  nzrpamnt    number(14,2) default 0 not null,
  nzrpptyp    varchar2(3) default ' ' not null,
  nzrppcod    varchar2(10) default ' ' not null,
  nzrpapis    varchar2(1) default ' ' not null,
  nzrpapdt    varchar2(8) default ' ' not null,
  nzrpcomt    varchar2(60) default ' ' not null,
  nzrpcdat    varchar2(8) default ' ' not null,
  nzrpctim    varchar2(8) default ' ' not null,
  nzrpcuid    varchar2(10) default ' ' not null,
  nzrpudat    varchar2(8) default ' ' not null,
  nzrputim    varchar2(8) default ' ' not null,
  nzrpuuid    varchar2(10) default ' ' not null,
  nzrprpis    varchar2(8) default ' ' not null,
  nzrpspar    varchar2(92) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nzprpia1 primary key( 
nzrpadmn,
nzrpinvn,
nzrprinv)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index nzprpia2 on nzprpiaf
(
nzrprpis
)
  tablespace pas_indx; 
create unique index nzprpia3 on nzprpiaf
(
nzrpapis,
nzrprpis
)
  tablespace pas_indx; 
