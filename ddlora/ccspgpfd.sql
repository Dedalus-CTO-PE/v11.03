create table ccspgpaf
(
  ccpghcd     varchar2(2) default ' ' not null,
  ccpgdpt     varchar2(8) default ' ' not null,
  ccpggcd     varchar2(4) default ' ' not null,
  ccpgdes     varchar2(35) default ' ' not null,
  ccpgdsc     number(16,4) default 0 not null,
  ccpgspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ccspgpa1 primary key( 
ccpghcd,
ccpgdpt,
ccpggcd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
