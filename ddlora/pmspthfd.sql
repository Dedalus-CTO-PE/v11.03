create table pmspthaf
(
pmptexdt    varchar2(8),
pmptextm    varchar2(8),
pmptflnm    varchar2(25),
pmptrcct    number(5,0),
pmptspar    varchar2(10),
lf          varchar2(1),
constraint pmsptha1 primary key( 
pmptexdt,
pmptextm)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmspthaf for pmspthaf;
