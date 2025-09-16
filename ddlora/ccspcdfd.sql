create table ccspcdaf
(
  ccpchcd     varchar2(2) default ' ' not null,
  ccpcdpt     varchar2(8) default ' ' not null,
  ccpcyear    varchar2(4) default ' ' not null,
  ccpcper     varchar2(2) default ' ' not null,
  ccpcpcd     varchar2(8) default ' ' not null,
  ccpccty     varchar2(4) default ' ' not null,
  ccpccst     number(18,6) default 0 not null,
  ccpcbct     number(18,6) default 0 not null,
  ccpcfbu     number(18,6) default 0 not null,
  ccpcrvi     number(18,6) default 0 not null,
  ccpcspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccspcda1 primary key( 
ccpchcd,
ccpcdpt,
ccpcyear,
ccpcper,
ccpcpcd,
ccpccty)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
