create table webgrpaf
(
wbgrgrpc    varchar2(10),
wbgrdesc    varchar2(50),
wbgrsurl    varchar2(70),
wbgractv    varchar2(1),
wbgrcdat    varchar2(8),
wbgrctim    varchar2(8),
wbgrcuid    varchar2(10),
wbgrudat    varchar2(8),
wbgrutim    varchar2(8),
wbgruuid    varchar2(10),
wbgrspar    varchar2(25),
lf          varchar2(1),
constraint webgrpa1 primary key( 
wbgrgrpc)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym webgrpaf for webgrpaf;
create unique index webgrpa2 on webgrpaf
(
wbgrdesc,
wbgrgrpc
)
  tablespace pas_indx; 
