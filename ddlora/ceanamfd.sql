create table ceanamaf
(
  cenawrd     varchar2(3) default ' ' not null,
  cenaspc     varchar2(3) default ' ' not null,
  cenapsc     varchar2(7) default ' ' not null,
  cenahqty    number(8,2) default 0 not null,
  cenadqty    number(8,2) default 0 not null,
  cenaspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceanama1 primary key( 
cenawrd,
cenaspc,
cenapsc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
