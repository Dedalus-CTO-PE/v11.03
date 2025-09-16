create table webhdpaf
(
wbhdhid     varchar2(2),
wbhdfil     varchar2(8),
wbhdpath    varchar2(60),
wbhdspa     varchar2(20),
lf          varchar2(1),
constraint webhdpa1 primary key( 
wbhdhid,
wbhdfil)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace iba01ax 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym webhdpaf for webhdpaf;
