create table hl7fp9af
(
  hlp9rsid    varchar2(64) default ' ' not null,
  hlp9vrid    varchar2(10) default ' ' not null,
  hlp9cnt1    varchar2(4) default ' ' not null,
  hlp9cnt2    varchar2(4) default ' ' not null,
  hlp9ause    varchar2(50) default ' ' not null,
  hlp9atyp    varchar2(50) default ' ' not null,
  hlp9atxt    varchar2(200) default ' ' not null,
  hlp9aln1    varchar2(200) default ' ' not null,
  hlp9aln2    varchar2(200) default ' ' not null,
  hlp9aln3    varchar2(200) default ' ' not null,
  hlp9aln4    varchar2(200) default ' ' not null,
  hlp9aln5    varchar2(200) default ' ' not null,
  hlp9acty    varchar2(200) default ' ' not null,
  hlp9adst    varchar2(200) default ' ' not null,
  hlp9asta    varchar2(200) default ' ' not null,
  hlp9apoc    varchar2(200) default ' ' not null,
  hlp9acou    varchar2(200) default ' ' not null,
  hlp9astr    varchar2(40) default ' ' not null,
  hlp9aend    varchar2(40) default ' ' not null,
  hlp9spar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7fp9a1 primary key( 
hlp9rsid,
hlp9vrid,
hlp9cnt1,
hlp9cnt2)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
