create table ccspfkaf
(
  ccpffky     varchar2(20) default ' ' not null,
  ccpfdes     varchar2(35) default ' ' not null,
  ccpfsus     varchar2(1) default ' ' not null,
  ccpfspa     varchar2(29) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccspfka1 primary key( 
ccpffky)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
