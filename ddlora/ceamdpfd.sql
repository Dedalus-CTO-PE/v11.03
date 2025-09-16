create table ceamdpaf
(
  cemdcod     varchar2(3) default ' ' not null,
  cemdspc     varchar2(3) default ' ' not null,
  cemdpsc     varchar2(7) default ' ' not null,
  cemdqty     number(8,2) default 0 not null,
  cemdspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint ceamdpa1 primary key( 
cemdcod,
cemdspc,
cemdpsc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
