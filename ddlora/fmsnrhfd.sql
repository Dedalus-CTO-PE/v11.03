create table fmsnrhxx
(
  fmnhrept    varchar2(3) default ' ' not null,
  fmnhcseq    varchar2(5) default ' ' not null,
  fmnhsseq    varchar2(5) default ' ' not null,
  fmnhacct    varchar2(12) default ' ' not null,
  fmnhdesc    varchar2(35) default ' ' not null,
  fmnhtype    varchar2(1) default ' ' not null,
  fmnhaytd    number(1,0) default 0 not null,
  fmnhclev    varchar2(3) default ' ' not null,
  fmnhslev    varchar2(3) default ' ' not null,
  fmnhcprt    varchar2(3) default ' ' not null,
  fmnhsprt    varchar2(3) default ' ' not null,
  fmnhdpla    varchar2(1) default ' ' not null,
  fmnhmult    number(8,2) default 0 not null,
  fmnhdiv     number(8,2) default 0 not null,
  fmnhspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsnrha1 primary key( 
fmnhrept,
fmnhcseq,
fmnhsseq)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index fmsnrha2 on fmsnrhxx
(
fmnhrept,
fmnhsseq,
fmnhcseq
)
  tablespace pas_indx; 
