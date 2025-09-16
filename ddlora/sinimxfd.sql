create table sinimxaf
(
  siixpor     varchar2(2) default ' ' not null,
  siixuni     varchar2(3) default ' ' not null,
  siixcst     varchar2(5) default ' ' not null,
  siixcat     varchar2(7) default ' ' not null,
  siixseq     varchar2(4) default ' ' not null,
  siixmax     number(14,2) default 0 not null,
  siixreq     number(14,2) default 0 not null,
  siixqoh     number(14,2) default 0 not null,
  siixur1     varchar2(15) default ' ' not null,
  siixur2     varchar2(15) default ' ' not null,
  siixud1     varchar2(8) default ' ' not null,
  siixud2     varchar2(8) default ' ' not null,
  siixuc1     varchar2(3) default ' ' not null,
  siixuc2     varchar2(3) default ' ' not null,
  siixuy1     varchar2(1) default ' ' not null,
  siixuy2     varchar2(1) default ' ' not null,
  siixwar     varchar2(5) default ' ' not null,
  siixresi    varchar2(10) default ' ' not null,
  siixspa     varchar2(5) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinimxa1 primary key( 
siixpor,
siixuni)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index sinimxa2 on sinimxaf
(
siixcat,
siixcst
)
  tablespace pas_indx; 
create unique index sinimxa3 on sinimxaf
(
siixcst,
siixseq,
siixcat
)
  tablespace pas_indx; 
