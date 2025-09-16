create table pcpidpaf
(
pcpicode    char(9),
pcpitime    decimal(4,0),
pcpistaf    char(3),
pcpispar    char(20),
lf          char(1)
);
create unique index pcpidpa1 on pcpidpaf
(
pcpicode
);
revoke all on pcpidpaf from public ; 
grant select on pcpidpaf to public ; 
