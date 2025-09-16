create table sinrcpaf
(
  sirppon     varchar2(7) default ' ' not null,
  sirpspa     varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinrcpa1 primary key( 
sirppon)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
