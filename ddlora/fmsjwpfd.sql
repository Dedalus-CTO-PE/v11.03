create table fmsjwpaf
(
  fmjwjty     varchar2(1) default ' ' not null,
  fmjwjid     varchar2(6) default ' ' not null,
  fmjwlno     varchar2(3) default ' ' not null,
  fmjwline    varchar2(70) default ' ' not null,
  fmjwspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsjwpa1 primary key( 
fmjwjty,
fmjwjid,
fmjwlno)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
