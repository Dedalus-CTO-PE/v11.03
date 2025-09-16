create table nzpcm2af
(
  nzcmclmc    varchar2(3) default ' ' not null,
  nzcmcntr    varchar2(6) default ' ' not null,
  nzcmrtyp    varchar2(1) default ' ' not null,
  nzcmcprc    varchar2(9) default ' ' not null,
  nzcmityp    varchar2(1) default ' ' not null,
  dnzcmcnt    varchar2(6) default ' ' not null,
  nzcmftyp    number(1,0) default 0 not null,
  nzcmproc    varchar2(9) default ' ' not null,
  nzcmmigp    varchar2(3) default ' ' not null,
  nzcmspar    varchar2(97) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nzpcm2a1 primary key( 
nzcmclmc,
nzcmcntr,
nzcmrtyp,
nzcmcprc,
nzcmityp,
dnzcmcnt)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index nzpcm2a2 on nzpcm2af
(
nzcmcprc,
nzcmclmc,
nzcmcntr,
nzcmrtyp,
nzcmityp,
dnzcmcnt
)
  tablespace pas_indx; 
create unique index nzpcm2a3 on nzpcm2af
(
nzcmclmc,
nzcmcntr,
nzcmrtyp,
nzcmityp,
nzcmproc,
nzcmcprc,
dnzcmcnt
)
  tablespace pas_indx; 
