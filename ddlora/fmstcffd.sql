create table fmstcfaf
(
  fmtctled    varchar2(2) default ' ' not null,
  fmtctacc    varchar2(12) default ' ' not null,
  fmtcaseq    varchar2(5) default ' ' not null,
  fmtcsled    varchar2(2) default ' ' not null,
  fmtcsacc    varchar2(12) default ' ' not null,
  fmtcpost    number(1,0) default 0 not null,
  fmtcaddt    varchar2(1) default ' ' not null,
  fmtcprt     varchar2(3) default ' ' not null,
  fmtcspar    varchar2(17) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmstcfa1 primary key( 
fmtctled,
fmtctacc,
fmtcaseq,
fmtcsled,
fmtcsacc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmstcfa2 on fmstcfaf
(
fmtcsled,
fmtcsacc,
fmtctled,
fmtctacc,
fmtcaseq
)
  tablespace pas_indx; 
