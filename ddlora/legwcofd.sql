create table legwcomf
(
  dlwcadmn    varchar2(8) default ' ' not null,
  lwcename    varchar2(30) default ' ' not null,
  lwceadd1    varchar2(30) default ' ' not null,
  lwceadd2    varchar2(30) default ' ' not null,
  lwceadd3    varchar2(30) default ' ' not null,
  lwcepost    varchar2(4) default ' ' not null,
  lwcetele    varchar2(12) default ' ' not null,
  lwcacdat    varchar2(8) default ' ' not null,
  lwcaccpt    number(1,0) default 0 not null,
  lwcicode    varchar2(6) default ' ' not null,
  lwcclmno    varchar2(20) default ' ' not null,
  lwccomn1    varchar2(40) default ' ' not null,
  lwccomn2    varchar2(40) default ' ' not null,
  lwcspare    varchar2(22) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint legwcom1 primary key( 
dlwcadmn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
