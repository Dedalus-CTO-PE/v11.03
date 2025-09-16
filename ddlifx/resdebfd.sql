create table resdebaf
(
redbrdt     char(8),
redbrtm     char(5),
redbrun     char(4),
redbsid     char(4),
redblno     char(3),
redbtxt     char(127),
redbspa     char(10),
lf          char(1)
);
create unique index resdeba1 on resdebaf
(
redbrdt,
redbrtm,
redbrun,
redbsid,
redblno
);
revoke all on resdebaf from public ; 
grant select on resdebaf to public ; 
