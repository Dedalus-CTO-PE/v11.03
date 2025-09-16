create table pcpidpaf
(
  pcpicode    varchar2(9) default ' ' not null,
  pcpitime    number(4,0) default 0 not null,
  pcpistaf    varchar2(3) default ' ' not null,
  pcpispar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pcpidpa1 primary key( 
pcpicode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
